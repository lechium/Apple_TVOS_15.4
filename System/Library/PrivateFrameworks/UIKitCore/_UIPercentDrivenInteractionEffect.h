//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionEffect-Protocol.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect>
{
    CDUnknownBlockType _progressBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007910e0
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x0000000000791069
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000791001

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
