//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableData *_data;	// 8 = 0x8
}

+ (id)storageWithData:(id)arg1;	// IMP=0x000000000001f7d8
- (void).cxx_destruct;	// IMP=0x000000000001fbaa
- (void)insertString:(id)arg1 atMarker:(id)arg2;	// IMP=0x000000000001fab5
- (unsigned long long)estimatedDataLength;	// IMP=0x000000000001fa9f
- (id)insertionMarker;	// IMP=0x000000000001fa66
- (unsigned long long)currentLength;	// IMP=0x000000000001fa50
- (void)appendData:(id)arg1;	// IMP=0x000000000001fa3a
- (void)appendFormat:(id)arg1;	// IMP=0x000000000001f930
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x000000000001f8dd
- (void)appendString:(id)arg1;	// IMP=0x000000000001f88e
- (id)initWithData:(id)arg1;	// IMP=0x000000000001f821

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

