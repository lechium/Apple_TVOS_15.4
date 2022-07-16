//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCMessage-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SIBCControlMessage : NSObject <SIBCMessage>
{
    NSNumber *_warmUp;	// 8 = 0x8
}

+ (id)messageId;	// IMP=0x000000000000c61e
- (void).cxx_destruct;	// IMP=0x000000000000c63c
@property(readonly, nonatomic) NSNumber *warmUp; // @synthesize warmUp=_warmUp;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000c558
- (id)dictionaryEncoding;	// IMP=0x000000000000c4c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

