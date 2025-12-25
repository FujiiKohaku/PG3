#pragma once
enum SceneState {
    TITLE,
    GAME,
    CLEAR,
};
class IScene {
protected:
    static SceneState sceneState;

public:
    virtual ~IScene() = default;
    virtual void Initialize() = 0;
    virtual void Update(char* keys, char* preKeys) = 0;
    virtual void Draw() = 0;
    /// シーン状態を取得
    static SceneState GetSceneState() { return sceneState; }
    static void SetSceneState(SceneState s) { sceneState = s; }
};
