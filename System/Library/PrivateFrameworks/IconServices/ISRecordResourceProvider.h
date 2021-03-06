//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSRecord, NSString;

__attribute__((visibility("hidden")))
@interface ISRecordResourceProvider
{
    NSString *_templateType;	// 96 = 0x60
    NSString *_fileExtension;	// 104 = 0x68
    LSRecord *_record;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000024edb
@property(readonly) LSRecord *record; // @synthesize record=_record;
@property(retain) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain) NSString *templateType; // @synthesize templateType=_templateType;
- (_Bool)_isAppleResource;	// IMP=0x0000000000024e1f
- (id)symbol;	// IMP=0x0000000000024c6a
- (unsigned long long)iconShape;	// IMP=0x0000000000024c3b
- (id)customRecipe;	// IMP=0x0000000000024bfd
- (id)templateIconResource;	// IMP=0x0000000000024bf5
- (id)resourceNamed:(id)arg1;	// IMP=0x0000000000024b4e
- (id)iconResource;	// IMP=0x0000000000024ad0
- (void)resolveResources;	// IMP=0x00000000000241bf
- (id)initWithRecord:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000023efa

@end

