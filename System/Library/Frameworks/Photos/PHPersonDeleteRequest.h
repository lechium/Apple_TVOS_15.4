//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHPersonDeleteRequest
{
    _Bool _force;	// 16 = 0x10
}

@property(nonatomic) _Bool force; // @synthesize force=_force;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x00000000001bdf39
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x00000000001bdeb4
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000001bde42
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001bdce0

@end
