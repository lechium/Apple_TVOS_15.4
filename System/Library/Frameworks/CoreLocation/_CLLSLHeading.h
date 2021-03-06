//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, _CLLSLHeadingSupplInfo, _CLLSLLocation;

@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding>
{
    double _timestamp;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    unsigned long long _globalReferenceFrame;	// 24 = 0x18
    _CLLSLLocation *_location;	// 32 = 0x20
    _CLLSLHeadingSupplInfo *_supplemantaryInfo;	// 40 = 0x28
    MISSING_TYPE *_rotationalAccuracyInRadians;	// 48 = 0x30
    CDStruct_8e0628e6 _rotationFromGlobalToDeviceFrame;	// 80 = 0x50
    CDStruct_8e0628e6 _rotationFromGlobalToCameraFrame;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072e43
@property(copy, nonatomic) _CLLSLHeadingSupplInfo *supplemantaryInfo; // @synthesize supplemantaryInfo=_supplemantaryInfo;
@property(copy, nonatomic) _CLLSLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long globalReferenceFrame; // @synthesize globalReferenceFrame=_globalReferenceFrame;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) MISSING_TYPE *rotationalAccuracyInRadians; // @synthesize rotationalAccuracyInRadians=_rotationalAccuracyInRadians;
@property(nonatomic) CDStruct_8e0628e6 rotationFromGlobalToCameraFrame; // @synthesize rotationFromGlobalToCameraFrame=_rotationFromGlobalToCameraFrame;
@property(nonatomic) CDStruct_8e0628e6 rotationFromGlobalToDeviceFrame; // @synthesize rotationFromGlobalToDeviceFrame=_rotationFromGlobalToDeviceFrame;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;	// IMP=0x0000000000072e6b
- (id)description;	// IMP=0x0000000000072e4b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072d1a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072aeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007299e
- (void)dealloc;	// IMP=0x0000000000072954

@end

