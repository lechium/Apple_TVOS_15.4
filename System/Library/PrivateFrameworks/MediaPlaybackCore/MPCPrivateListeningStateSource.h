//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_overrideValue;	// 8 = 0x8
    NSNumber *_currentValue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001327a7
+ (id)sourceWithUserIdentity:(id)arg1;	// IMP=0x000000000013273a
+ (id)staticSourceWithValue:(id)arg1;	// IMP=0x00000000001326ed
+ (id)localDeviceSource;	// IMP=0x00000000001326bd
- (void).cxx_destruct;	// IMP=0x0000000000132695
@property(readonly, copy, nonatomic) NSNumber *currentValue; // @synthesize currentValue=_currentValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000132680
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013266e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000132668
@property(readonly, nonatomic) long long sourceType;
@property(copy, nonatomic) NSNumber *overrideValue; // @synthesize overrideValue=_overrideValue;
- (id)_init;	// IMP=0x00000000001324e5

@end

