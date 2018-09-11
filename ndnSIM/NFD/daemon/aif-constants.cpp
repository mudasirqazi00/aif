
#ifndef aif_constants_cpp
#define aif_constants_cpp

class Constants {

public:
	static const int NameMinLength = 5;

	static const int DeferredTime = 2; //seconds
	static const int DeferredMinTime = 0; //seconds
	static const int DeferredTimeSlot = 1; //seconds

	//static constexpr double MinimumTime = 0.001500; //seconds
	static constexpr double MinimumTime = 0.2; //seconds | According to RTT estimatore's minimum retransmit timeout value, see ndn-rtt-estimator.cpp

	static const int AccumulationSize = 3;
	static const int StaticAccumulationSize = 3;
	static const int MinAccumulationSize = 1;
	static const int MaxAccumulationSize = 5;
	static const int EnableDynamicAccumulation = 1; // 0 = No, 1 = Yes
};

#endif
