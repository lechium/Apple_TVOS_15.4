//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMutableDictionary *_defaultValues;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aabfa
+ (void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3;	// IMP=0x00000000000aaa06
+ (id)defaultValues;	// IMP=0x00000000000aa979
+ (id)defaultValueForKey:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;	// IMP=0x00000000000aa80c
- (void).cxx_destruct;	// IMP=0x00000000000aac1d
@property(retain, nonatomic) NSMutableDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa9d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aa9ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa7da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa7c8
- (id)init;	// IMP=0x00000000000aa772

@end
