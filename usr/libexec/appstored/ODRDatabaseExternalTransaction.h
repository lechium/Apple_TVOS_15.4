//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ODRDatabaseChangeset;

@interface ODRDatabaseExternalTransaction
{
    ODRDatabaseChangeset *_changeset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000254164
@property(readonly, copy) ODRDatabaseChangeset *changeset; // @synthesize changeset=_changeset;
- (void)unionChangeset:(id)arg1;	// IMP=0x0010000000254131
- (void)commitExternalChanges;	// IMP=0x0010000000253c79
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000253c1c

@end

