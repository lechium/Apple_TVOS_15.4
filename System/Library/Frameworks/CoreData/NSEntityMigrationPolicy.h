//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSEntityMigrationPolicy : NSObject
{
}

- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;	// IMP=0x000000000008bfa6
- (_Bool)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008bf9e
- (_Bool)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008bf96
- (_Bool)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008bf8e
- (_Bool)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008b586
- (_Bool)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008b57e
- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008b232
- (_Bool)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008b22a

@end

