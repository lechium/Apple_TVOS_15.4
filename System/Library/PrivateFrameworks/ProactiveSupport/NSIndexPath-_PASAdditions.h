//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

#import <ProactiveSupport/_PASDistilledString-Protocol.h>

@class NSString;

@interface NSIndexPath (_PASAdditions) <_PASDistilledString>
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(_Bool)arg2;	// IMP=0x0000000000011359
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;	// IMP=0x0000000000011329
+ (id)_pas_fromVersionString:(id)arg1;	// IMP=0x0000000000011312
- (_Bool)_pas_isGreaterThanVersionString:(id)arg1;	// IMP=0x00000000000112b3
- (_Bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x0000000000011254
- (_Bool)_pas_isEqualToVersionString:(id)arg1;	// IMP=0x00000000000111f6
- (_Bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;	// IMP=0x0000000000011197
- (_Bool)_pas_isLessThanVersionString:(id)arg1;	// IMP=0x0000000000011138
- (id)_pas_asVersionString;	// IMP=0x0000000000010d17
- (id)_pas_revivedString;	// IMP=0x0000000000031781

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

