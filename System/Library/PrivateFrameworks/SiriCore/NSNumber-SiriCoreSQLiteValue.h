//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

#import <SiriCore/SiriCoreSQLiteValue-Protocol.h>

@class NSString;

@interface NSNumber (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (long long)siriCoreSQLiteValue_integerRepresentation;	// IMP=0x000000000001fe26
- (double)siriCoreSQLiteValue_doubleRepresentation;	// IMP=0x000000000001fe14
- (long long)siriCoreSQLiteValue_type;	// IMP=0x000000000001fce5
- (id)siriCoreSQLiteValue_toData;	// IMP=0x000000000001fc95
- (id)siriCoreSQLiteValue_toNumber;	// IMP=0x000000000001fc8c
- (id)siriCoreSQLiteValue_toString;	// IMP=0x000000000001fc7a
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;	// IMP=0x000000000001fc1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

