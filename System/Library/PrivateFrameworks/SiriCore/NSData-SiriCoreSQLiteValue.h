//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

#import <SiriCore/SiriCoreSQLiteValue-Protocol.h>

@class NSString;

@interface NSData (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (const void *)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long *)arg1;	// IMP=0x000000000001fb1b
- (long long)siriCoreSQLiteValue_type;	// IMP=0x000000000001fb10
- (id)siriCoreSQLiteValue_toData;	// IMP=0x000000000001fb07
- (id)siriCoreSQLiteValue_toNumber;	// IMP=0x000000000001fab7
- (id)siriCoreSQLiteValue_toString;	// IMP=0x000000000001fa7c
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;	// IMP=0x000000000001f9d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

