//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject
{
    int _frontmostPid;	// 8 = 0x8
    id <GCFrontmostApplicationObserverDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009d3e4
@property(nonatomic) __weak id <GCFrontmostApplicationObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000009d36b

@end

