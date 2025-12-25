#pragma once
enum SceneState {
    Title,
    GamePlay,
    Crear,
};
class IScene {
protected:
    static SceneState sceneState;

public:
    virtual ~IScene() = default;
    virtual void Initialize() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
    /// シーン状態を取得
    int GetSceneState();
};
