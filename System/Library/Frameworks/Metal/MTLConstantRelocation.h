//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLRelocation-Protocol.h>

@class NSString;
@protocol OS_dispatch_data;

@interface MTLConstantRelocation : NSObject <MTLRelocation>
{
    NSString *_symbolName;	// 8 = 0x8
    NSObject<OS_dispatch_data> *_data;	// 16 = 0x10
}

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (void)dealloc;	// IMP=0x0000000000057774
- (id)initWithSymbolName:(id)arg1 bytes:(void *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000057703
- (id)initWithSymbolName:(id)arg1 data:(id)arg2;	// IMP=0x000000000005769a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
