//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ABVCardCardDAVValueSetter
{
    _Bool _recordIsGroup;	// 24 = 0x18
    _Bool _importingToExistingGroup;	// 25 = 0x19
}

+ (int)groupPropertyForPersonProperty:(int)arg1;	// IMP=0x0000000000054949
+ (struct __CFDictionary *)_personToGroupPropertyMap;	// IMP=0x000000000005489c
@property _Bool recordIsGroup; // @synthesize recordIsGroup=_recordIsGroup;
- (id)imageData;	// IMP=0x0000000000055052
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;	// IMP=0x0000000000054e1f
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(_Bool)arg2;	// IMP=0x0000000000054dbc
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(_Bool)arg2;	// IMP=0x0000000000054d64
- (void)_drainExistingProperties;	// IMP=0x0000000000054c4b
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;	// IMP=0x0000000000054b9e
- (void *)valueForProperty:(unsigned int)arg1;	// IMP=0x0000000000054b1e
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;	// IMP=0x00000000000549c6
- (_Bool)propertyIsValidForPerson:(unsigned int)arg1;	// IMP=0x0000000000054988

@end
