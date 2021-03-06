//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CLAssertionInternal {
    id _field1;
    struct CLConnectionClient *_field2;
};

struct CLCallbackAssertionInternal {
    id _field1;
    CDUnknownBlockType _field2;
    struct CLConnectionClient *_field3;
};

struct CLConnectionClient;

struct CLConnectionMessage;

struct CLGnssDisablementAssertionInternal;

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CLRegulatoryConfigInternal;

struct _CLLocationManagerStateTrackerState {
    double distanceFilter;
    double desiredAccuracy;
    _Bool updatingLocation;
    _Bool requestingLocation;
    _Bool requestingRanging;
    _Bool updatingRanging;
    _Bool updatingHeading;
    double headingFilter;
    _Bool allowsLocationPrompts;
    _Bool allowsAlteredAccessoryLocations;
    _Bool dynamicAccuracyReductionEnabled;
    _Bool previousAuthorizationStatusValid;
    int previousAuthorizationStatus;
    _Bool limitsPrecision;
    long long activityType;
    int pausesLocationUpdatesAutomatically;
    _Bool paused;
    _Bool allowsBackgroundLocationUpdates;
    _Bool showsBackgroundLocationIndicator;
    _Bool allowsMapCorrection;
    _Bool batchingLocation;
    _Bool updatingVehicleSpeed;
    _Bool updatingVehicleHeading;
    _Bool matchInfoEnabled;
    _Bool groundAltitudeEnabled;
    _Bool fusionInfoEnabled;
    _Bool courtesyPromptNeeded;
    _Bool isAuthorizedForWidgetUpdates;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct shared_ptr<CLConnectionMessage> {
    struct CLConnectionMessage *_field1;
    struct __shared_weak_count *_field2;
};

struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> {
    struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> {
        struct CLConnectionClient *__value_;
    } __ptr_;
};

struct unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> {
    struct __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>> {
        struct CLGnssDisablementAssertionInternal *__value_;
    } __ptr_;
};

struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> {
    struct __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> {
        struct CLRegulatoryConfigInternal *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_b7b5e951;

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    float v[6][6];
} CDStruct_2972252c;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    double x;
    double y;
    double z;
    double magneticHeading;
    double trueHeading;
    double accuracy;
    double timestamp;
    double temperature;
    double magnitude;
    double inclination;
    int calibration;
} CDStruct_b560b707;

typedef struct {
    double speed;
    double timestamp;
    double machContinuousTime;
    double machAbsoluteTime;
} CDStruct_6a5f25ec;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    int _field4;
} CDStruct_b141a4d0;

typedef struct {
    double coordinate__horizontalAccuracy;
} CDStruct_c3074bf1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    float _field6;
    float _field7;
    float _field8;
    _Bool _field9;
    int _field10;
    struct {
        double _field1;
        double _field2;
    } _field11;
    double _field12;
    int _field13;
    int _field14;
    _Bool _field15;
    struct {
        double _field1;
        double _field2;
        _Bool _field3;
        _Bool _field4;
    } _field16;
    struct {
        double _field1;
        double _field2;
    } _field17;
    int _field18;
    float _field19;
    struct {
        double _field1;
        double _field2;
    } _field20;
    double _field21;
    double _field22;
    int _field23;
    _Bool _field24;
    double _field25;
    double _field26;
    double _field27;
    double _field28;
    double _field29;
    double _field30;
    double _field31;
    double _field32;
    _Bool _field33;
    _Bool _field34;
    struct {
        double _field1;
        double _field2;
    } _field35;
    double _field36;
    int _field37;
    double _field38;
    double _field39;
    double _field40;
    double _field41;
    int _field42;
    double _field43;
    double _field44;
} CDStruct_d25f1cbc;

typedef struct {
    int padding1;
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double padding2;
    double padding3;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
    int referenceFrame;
    int rawReferenceFrame;
    int signalEnvironmentType;
    double ellipsoidalAltitude;
    _Bool fromSimulationController;
} CDStruct_2fb123db;

typedef struct {
    char _field1[512];
    char _field2[512];
    char _field3[512];
    int _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    union {
        struct {
            char _field1[512];
            unsigned short _field2;
            unsigned short _field3;
            int _field4;
            _Bool _field5;
        } _field1;
        struct {
            struct {
                double _field1;
                double _field2;
            } _field1;
            double _field2;
            double _field3;
            int _field4;
            _Bool _field5;
            _Bool _field6;
        } _field2;
        struct {
            struct {
                double _field1;
                double _field2;
            } _field1[101];
            int _field2;
            int _field3;
            _Bool _field4;
        } _field3;
    } _field9;
} CDStruct_9fcfe784;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
} CDStruct_789f8997;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_5886a005;

typedef struct shared_ptr<CLConnectionMessage> {
    struct CLConnectionMessage *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_bdcc6d0f;

