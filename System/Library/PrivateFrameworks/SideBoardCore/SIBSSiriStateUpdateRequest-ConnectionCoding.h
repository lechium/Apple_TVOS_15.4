//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SideBoardServices/SIBSSiriStateUpdateRequest.h>

#import <SideBoardCore/SIBCConnectionCoding-Protocol.h>

@class NSString;

@interface SIBSSiriStateUpdateRequest (ConnectionCoding) <SIBCConnectionCoding>
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000c2a8
- (id)dictionaryEncoding;	// IMP=0x000000000000c1f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

