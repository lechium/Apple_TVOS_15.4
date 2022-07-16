//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject
{
    PXProgrammaticNavigationDestination *_destination;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000896ddb
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *destination; // @synthesize destination=_destination;
- (void)cancel;	// IMP=0x0000000000896d83
- (id)description;	// IMP=0x0000000000896ce1
- (id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000896c22
- (id)init;	// IMP=0x0000000000896ba8

@end
