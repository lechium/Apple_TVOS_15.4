//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLRelocation-Protocol.h>

@class NSString;
@protocol MTLBuffer;

@interface MTLBufferRelocation : NSObject <MTLRelocation>
{
    NSString *_symbolName;	// 8 = 0x8
    id <MTLBuffer> _buffer;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (void)dealloc;	// IMP=0x0000000000057632
- (id)initWithSymbolName:(id)arg1 buffer:(id)arg2 offset:(unsigned long long)arg3;	// IMP=0x00000000000575be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

