//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKQuirkyNSUndoManager : NSUndoManager
{
    WKContentView *_contentView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000710479
@property(readonly) __weak WKContentView *contentView; // @synthesize contentView=_contentView;
- (void)redo;	// IMP=0x0000000000710438
- (void)undo;	// IMP=0x000000000071040b
- (_Bool)canRedo;	// IMP=0x0000000000710403
- (_Bool)canUndo;	// IMP=0x00000000007103fb
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000007103a6

@end
