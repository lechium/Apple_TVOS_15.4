//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEReader-Protocol.h>

@class NSFileHandle, NSURL;

@interface DEFileReader : NSObject <DEReader>
{
    NSURL *_src;	// 8 = 0x8
    NSFileHandle *_file;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012a7c0
@property(retain, nonatomic) NSFileHandle *file; // @synthesize file=_file;
@property(retain, nonatomic) NSURL *src; // @synthesize src=_src;
- (id)readData;	// IMP=0x000000000012a70f
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000012a6f9
- (void)close;	// IMP=0x000000000012a6bb
- (void)dealloc;	// IMP=0x000000000012a61f
- (id)init;	// IMP=0x000000000012a60a
- (id)initWithURL:(id)arg1;	// IMP=0x000000000012a4ae

@end

