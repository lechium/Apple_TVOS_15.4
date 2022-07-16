//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUILibraryFamilyMembersDataSource
{
    NSArray *_familyMembers;	// 8 = 0x8
    VUIMediaAPIClient *_mediaClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012f4f7
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)_orderFamilyMembersByFirstName;	// IMP=0x000000000012f38d
- (void)startFetch;	// IMP=0x000000000012f04a
- (id)init;	// IMP=0x000000000012efc4

@end
