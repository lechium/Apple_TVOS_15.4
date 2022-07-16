//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextInputDelegate-Protocol.h>

@class NSString, UITextInteraction;

__attribute__((visibility("hidden")))
@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate>
{
    UITextInteraction *_rootInteraction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000df58d4
@property(nonatomic) __weak UITextInteraction *rootInteraction; // @synthesize rootInteraction=_rootInteraction;
- (void)textDidChange:(id)arg1;	// IMP=0x0000000000df57da
- (void)textWillChange:(id)arg1;	// IMP=0x0000000000df5707
- (void)selectionDidChange:(id)arg1;	// IMP=0x0000000000df55dc
- (void)selectionWillChange:(id)arg1;	// IMP=0x0000000000df5523

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

