//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSPredicate, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDNameValidator : HMFObject
{
    NSMutableDictionary *_namespaceList;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_homeManagerUUID;	// 24 = 0x18
    NSPredicate *_nonZeroLengthPredicate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006207b3
@property(retain, nonatomic) NSPredicate *nonZeroLengthPredicate; // @synthesize nonZeroLengthPredicate=_nonZeroLengthPredicate;
@property(retain, nonatomic) NSUUID *homeManagerUUID; // @synthesize homeManagerUUID=_homeManagerUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *namespaceList; // @synthesize namespaceList=_namespaceList;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(_Bool)arg4;	// IMP=0x000000000062048d
- (id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x0000000000620475
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x0000000000620460
- (id)removeName:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000620209
- (id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(_Bool)arg3;	// IMP=0x000000000061ffb2
- (id)addActionSetName:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061ff9a
- (id)addName:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061ff85
- (id)checkForConflict:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061fe13
- (id)validateName:(id)arg1;	// IMP=0x000000000061fcd6
- (id)removeNamespace:(id)arg1;	// IMP=0x000000000061fad0
- (id)addNamespace:(id)arg1;	// IMP=0x000000000061f8ca
- (id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x000000000061efaf
- (id)_removeName:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061ed97
- (id)_addName:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061eb47
- (id)_checkForConflict:(id)arg1 namespace:(id)arg2;	// IMP=0x000000000061e99a
- (id)trimNotAllowedCharactersFromName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000061e77b
- (id)_validateName:(id)arg1;	// IMP=0x000000000061e33b
- (id)despaceName:(id)arg1;	// IMP=0x000000000061e1fa
- (id)_removeNamespace:(id)arg1;	// IMP=0x000000000061e104
- (id)_addNamespace:(id)arg1;	// IMP=0x000000000061dfeb
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000061dec2

@end
