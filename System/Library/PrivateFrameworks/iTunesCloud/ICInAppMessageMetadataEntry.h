//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_metadataValues;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ce548
- (void).cxx_destruct;	// IMP=0x00000000000ce41f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ce391
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ce36e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ce253
- (id)allMetadataValues;	// IMP=0x00000000000ce19a
- (id)metadataValueForKey:(id)arg1;	// IMP=0x00000000000ce09f
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cdfdf
- (id)init;	// IMP=0x00000000000cdf58

@end
