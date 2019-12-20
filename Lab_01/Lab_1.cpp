int main()
{

	const float radius = 40000.f;

	float angle1 = 0.f;
	float angle2 = 0.f;
	float angle3 = 0.f;
	float angle4 = 0.f;

	std::cout << "Add a first point: " << std::endl;
	std::cin >> angle1 >> angle2;

	std::cout << "Add a second point: " << std::endl;
	std::cin >> angle3 >> angle4;

	float x1 = radius * std::cos(angle1) * std::sin(angle2);
	float y1 = radius * -std::sin(angle1);
	float z1 = radius * std::cos(angle1) * std::cos(angle2);

	float x2 = radius * std::cos(angle3) * std::sin(angle4);
	float y2 = radius * -std::sin(angle3);
	float z2 = radius * std::cos(angle3) * std::cos(angle4);

	const float cos = x1 * x2 + y1 * y2 + z1 * z2;

	const float degree = std::acosf(cos);

	std::cout << "Length is :" << degree * radius << std::endl;

	return 0;
}
