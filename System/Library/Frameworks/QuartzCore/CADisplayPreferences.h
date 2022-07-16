//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying>
{
    struct CADisplayPreferencesPriv *_priv;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *preferredHdrMode;
@property(readonly, nonatomic) int _preferredHdrType;
@property(nonatomic) _Bool matchContent;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001562f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015624
- (void)dealloc;	// IMP=0x00000000000155c7
- (id)initWithPreferences:(id)arg1;	// IMP=0x000000000001559a
- (id)initWithMatchContent:(_Bool)arg1 preferredHdrType:(int)arg2;	// IMP=0x0000000000015523
- (id)init;	// IMP=0x000000000001550f

@end
