//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface EDAMCreateOrUpdateNotebookSharesResult
{
    NSNumber *_updateSequenceNum;	// 8 = 0x8
    NSArray *_matchingShares;	// 16 = 0x10
}

+ (id)structFields;	// IMP=0x00000000001ab42b
+ (id)structName;	// IMP=0x00000000001ab41e
- (void).cxx_destruct;	// IMP=0x00000000001ab5d5
@property(retain, nonatomic) NSArray *matchingShares; // @synthesize matchingShares=_matchingShares;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;

@end
