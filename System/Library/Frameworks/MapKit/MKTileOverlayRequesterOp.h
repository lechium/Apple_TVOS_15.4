//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKTileOverlayRequester, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequesterOp : NSObject
{
    struct _GEOTileKey _key;	// 8 = 0x8
    MKTileOverlayRequester *_delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000020903d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak MKTileOverlayRequester *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void)_cancel;	// IMP=0x0000000000208d9f
- (void)cancel;	// IMP=0x0000000000208d3e
- (void)_start;	// IMP=0x0000000000208769
- (void)start;	// IMP=0x0000000000208708
- (id)init;	// IMP=0x0000000000208659

@end

