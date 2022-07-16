//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSStreamDelegate-Protocol.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate>
{
    NSOutputStream *_oStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000528d
@property(retain, nonatomic) NSOutputStream *oStream; // @synthesize oStream=_oStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x000000000000510d
- (void)endRequest;	// IMP=0x000000000000508a
- (void)logData:(id)arg1;	// IMP=0x0000000000004f3e
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;	// IMP=0x0000000000004d90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

