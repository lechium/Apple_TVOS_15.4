//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC3VFX9VFXEffect;

@interface _TtC3VFX24VFXRemoteEditionEndpoint : NSObject
{
    MISSING_TYPE *effect;	// 8 = 0x8
    MISSING_TYPE *name;	// 16 = 0x10
    MISSING_TYPE *multipeerAdvertiser;	// 32 = 0x20
    MISSING_TYPE *ownedByClient;	// 40 = 0x28
    MISSING_TYPE *urlToReloadFrom;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000001b8b0
- (id)init;	// IMP=0x000000000001c3f0
- (void)dealloc;	// IMP=0x000000000001b830
- (void)stop;	// IMP=0x000000000001b720
- (_Bool)startAndReturnError:(id *)arg1;	// IMP=0x000000000001b660
- (id)initWithName:(id)arg1;	// IMP=0x000000000001b2a0
@property(nonatomic, copy) NSString *name;
@property(nonatomic) __weak _TtC3VFX9VFXEffect *effect; // @synthesize effect;

@end

