//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PKAccountWebServiceTermsDataResponse
{
    NSData *_termsData;	// 8 = 0x8
    NSString *_termsDataFileName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f2fc0
@property(copy, nonatomic) NSString *termsDataFileName; // @synthesize termsDataFileName=_termsDataFileName;
@property(retain, nonatomic) NSData *termsData; // @synthesize termsData=_termsData;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001f2a73

@end

