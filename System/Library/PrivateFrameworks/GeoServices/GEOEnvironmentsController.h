//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject
{
    NSArray *_defaultEnvironmentInfos;	// 8 = 0x8
    NSArray *_environmentInfos;	// 16 = 0x10
    NSArray *_customEnvironmentInfos;	// 24 = 0x18
    _Bool _enableCustomEnvironments;	// 32 = 0x20
    id <GEOEnvironmentsControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000113c91c
@property(nonatomic) __weak id <GEOEnvironmentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)activeEnvironment;	// IMP=0x000000000113c754
- (void)removeCustomEnvironment:(id)arg1;	// IMP=0x000000000113c689
- (void)addCustomEnvironment:(id)arg1;	// IMP=0x000000000113c522
- (id)environmentInfosForSection:(long long)arg1;	// IMP=0x000000000113c4fd
- (void)reloadEnvironments:(CDUnknownBlockType)arg1;	// IMP=0x000000000113b79f
- (void)reloadEnvironments;	// IMP=0x000000000113b78b
- (void)dealloc;	// IMP=0x000000000113b716
- (id)initEnablingCustomEnvironments:(_Bool)arg1;	// IMP=0x000000000113b669

@end
