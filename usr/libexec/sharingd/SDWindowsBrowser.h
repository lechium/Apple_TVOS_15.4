//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SDBonjourBrowser;
@protocol SDWindowsBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDWindowsBrowser : NSObject
{
    SDBonjourBrowser *_browser;	// 8 = 0x8
    NSString *_workgroup;	// 16 = 0x10
    id <SDWindowsBrowserDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000108ff1
@property __weak id <SDWindowsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *workgroup; // @synthesize workgroup=_workgroup;
- (void)stop;	// IMP=0x0010000000108f67
- (void)start;	// IMP=0x0010000000108e80
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x0010000000108e4a
@property(readonly, copy) NSArray *nodes;
- (void)dealloc;	// IMP=0x0010000000108df6
- (id)initWithWorkgroup:(id)arg1;	// IMP=0x0010000000108d79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

