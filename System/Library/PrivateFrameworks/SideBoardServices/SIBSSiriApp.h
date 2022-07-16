//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SIBSSiriAppFactory;

@interface SIBSSiriApp
{
    id <SIBSSiriAppFactory> _factory;	// 8 = 0x8
    NSMutableArray *_contexts;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _foreground;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000019f0
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
- (id)applicationIdentifier;	// IMP=0x00000000000019c3
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000000195f
- (id)initWithFactory:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000188c

@end
