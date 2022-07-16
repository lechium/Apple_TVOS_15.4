//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookUtility/BUInputStream-Protocol.h>

@class NSString;
@protocol BUReadChannel, OS_dispatch_data;

@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream>
{
    id <BUReadChannel> _readChannel;	// 8 = 0x8
    NSObject<OS_dispatch_data> *_leftoverData;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027d16
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *leftoverData; // @synthesize leftoverData=_leftoverData;
@property(retain, nonatomic) id <BUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
- (id)closeLocalStream;	// IMP=0x0000000000027cce
- (void)enableSystemCaching;	// IMP=0x0000000000027cc8
- (void)disableSystemCaching;	// IMP=0x0000000000027cc2
- (void)seekToOffset:(long long)arg1;	// IMP=0x0000000000027c4b
- (_Bool)canSeek;	// IMP=0x0000000000027c18
- (void)close;	// IMP=0x0000000000027bbe
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000273b4
- (void)dealloc;	// IMP=0x000000000002736c
- (id)initWithReadChannel:(id)arg1;	// IMP=0x00000000000272f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

