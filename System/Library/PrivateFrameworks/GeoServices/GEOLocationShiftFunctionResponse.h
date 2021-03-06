//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding>
{
    CDStruct_2c43369c _originalCoordinate;	// 8 = 0x8
    double _params[9];	// 24 = 0x18
    double _radius;	// 96 = 0x60
    _Bool _shouldUsePolyShiftFunction;	// 104 = 0x68
    unsigned int _version;	// 108 = 0x6c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009d4503
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009d4bb2
- (_Bool)isValidForCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000009d4b87
- (CDStruct_c3b9c2ee)shiftedCoordinateForCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double *)arg2;	// IMP=0x00000000009d491f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009d484f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009d46ce
- (id)contractFunctionTo:(id)arg1 withRadius:(double)arg2;	// IMP=0x00000000009d45f2
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2 version:(unsigned int)arg3;	// IMP=0x00000000009d450b

@end

