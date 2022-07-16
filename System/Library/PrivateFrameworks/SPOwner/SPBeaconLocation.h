//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;	// 8 = 0x8
    double _latitude;	// 16 = 0x10
    double _longitude;	// 24 = 0x18
    double _horizontalAccuracy;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009606
- (void).cxx_destruct;	// IMP=0x0000000000009ac1
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)debugDescription;	// IMP=0x000000000000995d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009860
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000097aa
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5;	// IMP=0x00000000000096e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000960e

@end

