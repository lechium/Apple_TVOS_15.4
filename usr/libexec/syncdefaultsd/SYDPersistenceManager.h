//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSUUID;

@interface SYDPersistenceManager : NSObject
{
    CDUnknownBlockType _cacheableProgressCallback;	// 8 = 0x8
    NSUUID *_knowledgeUUID;	// 16 = 0x10
    NSNumber *_sequenceNumber;	// 24 = 0x18
    NSMutableDictionary *_clientsForBundleID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000a44e
+ (id)defaultManager;	// IMP=0x0010000000009349
- (void).cxx_destruct;	// IMP=0x002000000000a6e8
@property(retain, nonatomic) NSMutableDictionary *clientsForBundleID; // @synthesize clientsForBundleID=_clientsForBundleID;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSUUID *knowledgeUUID; // @synthesize knowledgeUUID=_knowledgeUUID;
@property(copy, nonatomic) CDUnknownBlockType cacheableProgressCallback; // @synthesize cacheableProgressCallback=_cacheableProgressCallback;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a4f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000a456
- (id)installInfoForBundleIdentifiers:(id)arg1;	// IMP=0x0010000000009f07
- (id)installInfoForBundleIdentifier:(id)arg1;	// IMP=0x0010000000009e2a
- (void)_refreshThenPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009608
- (_Bool)_unsafe_processBundleID:(id)arg1 record:(id)arg2;	// IMP=0x00100000000093cd
- (id)init;	// IMP=0x001000000000939e

@end

