支持Odyssey :

https://fab.com/s/7d6718394466 (Fab官网插件)

https://praxinos.coop/forum/ (作者工作室的网址)

有没有想过在UE中进行Photoshop功能的绘画，诶！这就是了。

不只是编辑器，我已将主要功能都添加了支持Runtime，UE终于有Runtime绘制工具了。

使用笔刷、工具栏、图层（Runtime不支持）、Redo、Undo等等，来绘制你的画布吧

支持UE5.4.其他版本没试过，

缺点：我无法解决由Brush绘制导致的卡顿

# Iliad Runtime Widget 使用流程与方法

## 1. 目标

本文档说明如何在 Runtime（Game/Shipping）中使用 Iliad 的绘画组件：

- `UOdysseyPaintWidget`
- `UOdysseyRuntimePaintViewModel`
- `UOdysseyRuntimeToolsWidget`
- `UOdysseyRuntimeColorWheelWidget`
- `UOdysseyRuntimeToolOptionsWidget`
- `UOdysseyRuntimeBrushSelectorWidget`

核心原则：四个工具面板和画布共享同一个 `ViewModel`，通过它联动状态。

---

## 2. 推荐接入流程（Blueprint）

1. 在一个 `UserWidget`（例如 `WBP_PaintRuntime`）中放置：

- 一个 `OdysseyPaintWidget`（画布）
- 一个 `OdysseyRuntimeToolsWidget`（工具切换）
- 一个 `OdysseyRuntimeColorWheelWidget`（颜色）
- 一个 `OdysseyRuntimeToolOptionsWidget`（参数）
- 一个 `OdysseyRuntimeBrushSelectorWidget`（预设）

2. 在 `Event Construct` 中：

- `Construct Object from Class` 创建 `OdysseyRuntimePaintViewModel`
- 把这个对象分别传给上述 5 个 Widget 的 `SetViewModel(...)`

3. 初始化画布：

- 调用 `OdysseyPaintWidget.InitializeCanvas(Width, Height, ClearColor)`

4. 运行时交互：

- Tools 面板切换 Brush/Eraser/Bucket
- ColorWheel 调整颜色
- ToolOptions 调整 Size/Opacity/Hardness（Bucket 还可调 Tolerance）
- BrushSelector 选择 BrushPreset

---

## 3. C++ 用法示例

```cpp
// 假设这些是 UPROPERTY 绑定好的控件
// UOdysseyPaintWidget* PaintWidget;
// UOdysseyRuntimeToolsWidget* ToolsWidget;
// UOdysseyRuntimeColorWheelWidget* ColorWidget;
// UOdysseyRuntimeToolOptionsWidget* OptionsWidget;
// UOdysseyRuntimeBrushSelectorWidget* BrushWidget;

UOdysseyRuntimePaintViewModel* ViewModel =
    NewObject<UOdysseyRuntimePaintViewModel>(this);

PaintWidget->SetViewModel(ViewModel);
ToolsWidget->SetViewModel(ViewModel);
ColorWidget->SetViewModel(ViewModel);
OptionsWidget->SetViewModel(ViewModel);
BrushWidget->SetViewModel(ViewModel);

PaintWidget->InitializeCanvas(1024, 1024, FLinearColor::Transparent);
```

---

## 4. 关键 API 说明

## 4.1 `UOdysseyPaintWidget`

- `InitializeCanvas(int32 Width, int32 Height, FLinearColor ClearColor)`  
  初始化 Runtime 画布纹理。
- `SetViewModel(UOdysseyRuntimePaintViewModel*)`  
  绑定共享状态模型（推荐主入口）。
- `SetTool(...) / SetToolSettings(...)`  
  兼容直连调用；若已绑定 ViewModel，会双向同步。
- `Undo() / Redo() / Clear()`  
  历史与清空操作。

## 4.2 `UOdysseyRuntimePaintViewModel`

- `SetActiveTool(Brush/Eraser/Bucket)`
- `SetToolSettings(...)`
- `SetColor(...) / SetSize(...) / SetOpacity(...) / SetHardness(...) / SetTolerance(...)`
- `SetBrushPresets(...)`
- `SelectBrushPresetById(...) / SelectBrushPresetByIndex(...)`

事件：

- `OnActiveToolChanged`
- `OnToolSettingsChanged`
- `OnBrushPresetChanged`
- `OnBrushPresetsChanged`

---

## 5. BrushPreset 使用方法

`ViewModel` 内置默认预设（Soft Round / Hard Round / Large Soft）。  
如果你要自定义，可在运行时注入：

```cpp
TArray<FOdysseyRuntimeBrushPreset> Presets;

FOdysseyRuntimeBrushPreset P1;
P1.PresetId = TEXT("Ink");
P1.DisplayName = FText::FromString(TEXT("Ink"));
P1.Size = 6.0f;
P1.Opacity = 1.0f;
P1.Hardness = 1.0f;
P1.Tolerance = 0.02f;
Presets.Add(P1);

ViewModel->SetBrushPresets(Presets);
ViewModel->SelectBrushPresetByIndex(0);
```

---

## 6. 参数与工具行为

- `Brush`：使用当前颜色绘制。
- `Eraser`：按透明度/硬度擦除 Alpha。
- `Bucket`：基于 `Tolerance` 做区域填充。

参数范围：

- `Size`：`1 ~ 256`
- `Opacity`：`0 ~ 1`
- `Hardness`：`0 ~ 1`
- `Tolerance`：`0 ~ 1`

---

## 
