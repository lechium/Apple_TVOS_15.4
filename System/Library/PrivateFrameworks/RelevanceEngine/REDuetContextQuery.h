//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSUUID, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject
{
    NSArray *_searchKeyPaths;	// 8 = 0x8
    CDUnknownBlockType _evalBlock;	// 16 = 0x10
    NSSet *_devices;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    _CDContextualPredicate *_predicate;	// 48 = 0x30
    _CDMDCSContextualPredicate *_remotePredicate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000780a9
@property(readonly, nonatomic) _CDMDCSContextualPredicate *remotePredicate; // @synthesize remotePredicate=_remotePredicate;
@property(readonly, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSSet *devices; // @synthesize devices=_devices;
- (id)valueFromUserContext:(id)arg1;	// IMP=0x0000000000077afb
- (id)_sortedKeyPaths:(id)arg1;	// IMP=0x000000000007776f
- (id)_localKeyPaths;	// IMP=0x00000000000776ef
- (id)_keyPathsForDevice:(id)arg1;	// IMP=0x000000000007736d
- (id)createRegistrationsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000770f1
- (id)_remoteRegistrationForDevice:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076f5f
- (id)_localRegistrationWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076da7
@property(readonly, nonatomic) NSSet *keyPaths;
@property(readonly, nonatomic) NSString *registrationID;
- (id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000076bb6

@end

