//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ML3MatchImportOperation
{
}

- (void)updateImportProgress:(float)arg1;	// IMP=0x0000000000133e44
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x0000000000133ba3
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x0000000000133ac9
- (_Bool)_performMatchImportWithTransaction:(id)arg1;	// IMP=0x0000000000133969
- (void)main;	// IMP=0x0000000000133655
- (unsigned long long)importSource;	// IMP=0x000000000013364a

@end

