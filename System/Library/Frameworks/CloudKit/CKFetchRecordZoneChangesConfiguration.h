//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _fetchNewestChangesFirst;	// 8 = 0x8
    _Bool _fetchChangesMadeByThisDevice;	// 9 = 0x9
    CKServerChangeToken *_previousServerChangeToken;	// 16 = 0x10
    unsigned long long _resultsLimit;	// 24 = 0x18
    NSArray *_desiredKeys;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000119881
- (void).cxx_destruct;	// IMP=0x0000000000119b95
@property(nonatomic) _Bool fetchChangesMadeByThisDevice; // @synthesize fetchChangesMadeByThisDevice=_fetchChangesMadeByThisDevice;
@property(nonatomic) _Bool fetchNewestChangesFirst; // @synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001199b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000119889
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000119732
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000001194c4
- (id)description;	// IMP=0x00000000001194b2
- (id)init;	// IMP=0x000000000011947a

@end

