template<typename... Args>
void lambda_capture(Args... args) {
    auto lambda = [args...]() {
        // args kullanılabilir
        };
}
