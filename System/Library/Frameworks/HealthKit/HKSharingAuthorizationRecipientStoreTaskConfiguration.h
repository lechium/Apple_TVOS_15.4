//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface HKSharingAuthorizationRecipientStoreTaskConfiguration
{
    NSArray *_sharingAuthorizations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006feac
- (void).cxx_destruct;	// IMP=0x0000000000070026
@property(copy, nonatomic) NSArray *sharingAuthorizations; // @synthesize sharingAuthorizations=_sharingAuthorizations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ff87
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006feb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006fe4a

@end
