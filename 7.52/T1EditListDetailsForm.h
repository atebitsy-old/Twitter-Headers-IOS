//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

@class TFNBooleanItem, TFNFormField, TFNTwitterList;

@interface T1EditListDetailsForm : TFNForm
{
    TFNFormField *_nameField;
    TFNFormField *_descriptionField;
    TFNBooleanItem *_privateItem;
    TFNBooleanItem *_addToHomeItem;
    TFNTwitterList *_list;
}

@property(readonly, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
@property(readonly, nonatomic) TFNBooleanItem *addToHomeItem; // @synthesize addToHomeItem=_addToHomeItem;
@property(readonly, nonatomic) TFNBooleanItem *privateItem; // @synthesize privateItem=_privateItem;
@property(retain, nonatomic) TFNFormField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain, nonatomic) TFNFormField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (id)sections;
- (_Bool)isSubmittable;
- (id)initWithList:(id)arg1 account:(id)arg2;

@end
