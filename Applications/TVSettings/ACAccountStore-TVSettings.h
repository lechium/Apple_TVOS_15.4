//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (TVSettings)
- (_Bool)_isGameCenterAccount:(id)arg1;	// IMP=0x00100000000adbc0
- (void)tvsettings_removeAccountsNotUsedByUserProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ac940
- (void)tvsettings_removeAccountsWithTuples:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000abd60
- (id)tvsettings_gameCenterAccountWithAltDSID:(id)arg1;	// IMP=0x00100000000abb80
@end

