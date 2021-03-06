//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface PKPaginatedWebServiceResponse
{
    NSArray *_rawDataList;	// 24 = 0x18
    NSNumber *_pageOffset;	// 32 = 0x20
    NSNumber *_totalPageCount;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003c2796
+ (id)responseWithData:(id)arg1;	// IMP=0x00000000003c26bd
- (void).cxx_destruct;	// IMP=0x00000000003c28d7
@property(readonly, nonatomic) NSNumber *totalPageCount; // @synthesize totalPageCount=_totalPageCount;
@property(readonly, nonatomic) NSNumber *pageOffset; // @synthesize pageOffset=_pageOffset;
@property(readonly, nonatomic) NSArray *rawDataList; // @synthesize rawDataList=_rawDataList;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c282b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c279e
- (id)debugDescription;	// IMP=0x00000000003c270e
- (id)initWithData:(id)arg1;	// IMP=0x00000000003c2499

@end

