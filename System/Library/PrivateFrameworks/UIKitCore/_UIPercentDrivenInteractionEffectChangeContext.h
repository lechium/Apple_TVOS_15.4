//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionContext-Protocol.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext>
{
    _Bool _ended;	// 8 = 0x8
    double _progress;	// 16 = 0x10
    double _maximumProgress;	// 24 = 0x18
}

@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(nonatomic) double maximumProgress; // @synthesize maximumProgress=_maximumProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

