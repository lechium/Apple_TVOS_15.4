//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo <NSSecureCoding>
{
    _Bool _shouldFetchAssetContent;	// 8 = 0x8
    NSArray *_recordIDs;	// 16 = 0x10
    NSArray *_desiredKeys;	// 24 = 0x18
    NSString *_minimumVersionETag;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e15af
- (void).cxx_destruct;	// IMP=0x00000000000e191d
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e169f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e15b7
- (id)init;	// IMP=0x00000000000e1570

@end

